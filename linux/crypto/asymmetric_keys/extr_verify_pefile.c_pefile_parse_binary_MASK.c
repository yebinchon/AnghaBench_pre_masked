
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_header {int dummy; } ;
struct pefile_context {unsigned long image_checksum_offset; size_t header_size; size_t n_data_dirents; unsigned long cert_dirent_offset; int certs_size; size_t sig_offset; int sig_len; size_t n_sections; struct section_header const* secs; } ;
struct pe_hdr {scalar_t__ magic; size_t sections; } ;
struct pe32plus_opt_hdr {size_t header_size; size_t data_dirs; int csum; } ;
struct pe32_opt_hdr {int magic; size_t header_size; size_t data_dirs; int csum; } ;
struct mz_hdr {scalar_t__ magic; size_t peaddr; } ;
struct data_dirent {int dummy; } ;
struct TYPE_2__ {int size; size_t virtual_address; } ;
struct data_directory {TYPE_1__ certs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (size_t,size_t,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(const void *VAR_4, unsigned int VAR_5,
          struct pefile_context *VAR_6)
{
 const struct mz_hdr *VAR_7 = VAR_4;
 const struct pe_hdr *VAR_8;
 const struct pe32_opt_hdr *VAR_9;
 const struct pe32plus_opt_hdr *VAR_10;
 const struct data_directory *VAR_11;
 const struct data_dirent *VAR_12;
 const struct section_header *VAR_13, *VAR_14;
 size_t VAR_15, VAR_16 = VAR_5;

 FUNC_1("");







 do { if ((0) < 0 || (sizeof(*VAR_7)) >= VAR_16 || (0) > VAR_16 - (sizeof(*VAR_7))) return -VAR_0; } while (0);
 if (VAR_7->magic != VAR_2)
  return -VAR_0;
 VAR_15 = sizeof(*VAR_7);

 do { if ((VAR_7->peaddr) < VAR_15 || (sizeof(*VAR_8)) >= VAR_16 || (VAR_7->peaddr) > VAR_16 - (sizeof(*VAR_8))) return -VAR_0; } while (0);
 VAR_8 = VAR_4 + VAR_7->peaddr;
 if (VAR_8->magic != VAR_3)
  return -VAR_0;
 VAR_15 = VAR_7->peaddr + sizeof(*VAR_8);

 do { if ((VAR_15) < 0 || (sizeof(VAR_9->magic)) >= VAR_16 || (VAR_15) > VAR_16 - (sizeof(VAR_9->magic))) return -VAR_0; } while (0);
 VAR_9 = VAR_4 + VAR_15;
 VAR_10 = VAR_4 + VAR_15;

 switch (VAR_9->magic) {
 case 129:
  do { if ((VAR_15) < 0 || (sizeof(*VAR_9)) >= VAR_16 || (VAR_15) > VAR_16 - (sizeof(*VAR_9))) return -VAR_0; } while (0);
  VAR_6->image_checksum_offset =
   (unsigned long)&VAR_9->csum - (unsigned long)VAR_4;
  VAR_6->header_size = VAR_9->header_size;
  VAR_15 += sizeof(*VAR_9);
  VAR_6->n_data_dirents = VAR_9->data_dirs;
  break;

 case 128:
  do { if ((VAR_15) < 0 || (sizeof(*VAR_10)) >= VAR_16 || (VAR_15) > VAR_16 - (sizeof(*VAR_10))) return -VAR_0; } while (0);
  VAR_6->image_checksum_offset =
   (unsigned long)&VAR_10->csum - (unsigned long)VAR_4;
  VAR_6->header_size = VAR_10->header_size;
  VAR_15 += sizeof(*VAR_10);
  VAR_6->n_data_dirents = VAR_10->data_dirs;
  break;

 default:
  FUNC_2("Unknown PEOPT magic = %04hx\n", VAR_9->magic);
  return -VAR_0;
 }

 FUNC_2("checksum @ %x\n", VAR_6->image_checksum_offset);
 FUNC_2("header size = %x\n", VAR_6->header_size);

 if (VAR_15 >= VAR_6->header_size || VAR_6->header_size >= VAR_16)
  return -VAR_0;

 if (VAR_6->n_data_dirents > (VAR_6->header_size - VAR_15) / sizeof(*VAR_12))
  return -VAR_0;

 VAR_11 = VAR_4 + VAR_15;
 VAR_15 += sizeof(*VAR_12) * VAR_6->n_data_dirents;

 VAR_6->cert_dirent_offset =
  (unsigned long)&VAR_11->certs - (unsigned long)VAR_4;
 VAR_6->certs_size = VAR_11->certs.size;

 if (!VAR_11->certs.virtual_address || !VAR_11->certs.size) {
  FUNC_2("Unsigned PE binary\n");
  return -VAR_1;
 }

 do { if ((VAR_11->certs.virtual_address) < VAR_6->header_size || (VAR_11->certs.size) >= VAR_16 || (VAR_11->certs.virtual_address) > VAR_16 - (VAR_11->certs.size)) return -VAR_0; } while (0);

 VAR_6->sig_offset = VAR_11->certs.virtual_address;
 VAR_6->sig_len = VAR_11->certs.size;
 FUNC_2("cert = %x @%x [%*ph]\n",
   VAR_6->sig_len, VAR_6->sig_offset,
   VAR_6->sig_len, VAR_4 + VAR_6->sig_offset);

 VAR_6->n_sections = VAR_8->sections;
 if (VAR_6->n_sections > (VAR_6->header_size - VAR_15) / sizeof(*VAR_14))
  return -VAR_0;
 VAR_6->secs = VAR_13 = VAR_4 + VAR_15;

 return 0;
}
