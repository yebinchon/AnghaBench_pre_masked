
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct shash_desc {int dummy; } ;
struct pefile_context {unsigned int image_checksum_offset; unsigned int cert_dirent_offset; unsigned int header_size; unsigned int n_sections; unsigned int certs_size; TYPE_1__* secs; } ;
struct data_dirent {int dummy; } ;
typedef int canon ;
struct TYPE_3__ {scalar_t__ raw_data_size; int data_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct shash_desc*,void const*,unsigned int) ;
 unsigned int* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (unsigned int*,unsigned int*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(const void *VAR_2, unsigned int VAR_3,
         struct pefile_context *VAR_4,
         struct shash_desc *VAR_5)
{
 unsigned *VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;




 VAR_11 = FUNC_0(VAR_5, VAR_2, VAR_4->image_checksum_offset);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_7 = VAR_4->image_checksum_offset + sizeof(uint32_t);
 VAR_11 = FUNC_0(VAR_5, VAR_2 + VAR_7,
      VAR_4->cert_dirent_offset - VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_7 = VAR_4->cert_dirent_offset + sizeof(struct data_dirent);
 VAR_11 = FUNC_0(VAR_5, VAR_2 + VAR_7, VAR_4->header_size - VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_6 = FUNC_1(VAR_4->n_sections, sizeof(unsigned), VAR_1);
 if (!VAR_6)
  return -VAR_0;




 VAR_6[0] = 0;
 for (VAR_8 = 1; VAR_8 < VAR_4->n_sections; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   if (FUNC_4(&VAR_4->secs[VAR_6[VAR_9]],
       &VAR_4->secs[VAR_8]) > 0) {
    FUNC_3(&VAR_6[VAR_9 + 1], &VAR_6[VAR_9],
     (VAR_8 - VAR_9) * sizeof(VAR_6[0]));
    break;
   }
  }
  VAR_6[VAR_9] = VAR_8;
 }

 VAR_10 = VAR_4->header_size;
 for (VAR_8 = 0; VAR_8 < VAR_4->n_sections; VAR_8++) {
  VAR_9 = VAR_6[VAR_8];
  if (VAR_4->secs[VAR_9].raw_data_size == 0)
   continue;
  VAR_11 = FUNC_0(VAR_5,
       VAR_2 + VAR_4->secs[VAR_9].data_addr,
       VAR_4->secs[VAR_9].raw_data_size);
  if (VAR_11 < 0) {
   FUNC_2(VAR_6);
   return VAR_11;
  }
  VAR_10 += VAR_4->secs[VAR_9].raw_data_size;
 }
 FUNC_2(VAR_6);

 if (VAR_3 > VAR_10) {
  VAR_7 = VAR_10 + VAR_4->certs_size;
  VAR_11 = FUNC_0(VAR_5,
       VAR_2 + VAR_10,
       VAR_3 - VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
