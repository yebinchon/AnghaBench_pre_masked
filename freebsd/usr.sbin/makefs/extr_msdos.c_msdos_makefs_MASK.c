
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vnode {TYPE_1__* fs; } ;
struct timeval {int dummy; } ;
struct msdosfsmount {int dummy; } ;
struct TYPE_6__ {scalar_t__ offset; int bytes_per_sector; int create_size; } ;
struct msdos_options_ex {TYPE_4__ options; } ;
typedef int fsnode ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ maxsize; scalar_t__ offset; int sectorsize; int fd; struct msdos_options_ex* fs_specific; } ;
typedef TYPE_1__ fsinfo_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct timeval,char*) ;
 int FUNC_2 (struct timeval) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char const*,int *,TYPE_4__*) ;
 int FUNC_9 (char const*,int ,int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_10 (struct msdosfsmount*) ;
 struct msdosfsmount* FUNC_11 (struct vnode*) ;
 scalar_t__ FUNC_12 (struct msdosfsmount*,struct vnode*) ;
 int FUNC_13 (char const*,int ) ;
 int FUNC_14 (char*,char const*,...) ;
 int FUNC_15 (char) ;

void
FUNC_16(const char *VAR_3, const char *VAR_4, fsnode *VAR_5, fsinfo_t *VAR_6)
{
 struct msdos_options_ex *VAR_7 = VAR_6->fs_specific;
 struct vnode VAR_8, VAR_9;
 struct timeval VAR_10;
 struct msdosfsmount *VAR_11;
 uint32_t VAR_12;

 FUNC_4(VAR_3 != ((void*)0));
 FUNC_4(VAR_4 != ((void*)0));
 FUNC_4(VAR_5 != ((void*)0));
 FUNC_4(VAR_6 != ((void*)0));

 VAR_6->size = VAR_6->maxsize;
 VAR_7->options.create_size = FUNC_0(VAR_7->options.create_size,
     VAR_6->offset + VAR_6->size);
 if (VAR_6->offset > 0)
  VAR_7->options.offset = VAR_6->offset;
 if (VAR_7->options.bytes_per_sector == 0) {
  if (VAR_6->sectorsize == -1)
   VAR_6->sectorsize = 512;
  VAR_7->options.bytes_per_sector = VAR_6->sectorsize;
 } else if (VAR_6->sectorsize == -1) {
  VAR_6->sectorsize = VAR_7->options.bytes_per_sector;
 } else if (VAR_6->sectorsize != VAR_7->options.bytes_per_sector) {
  FUNC_6(1, "inconsistent sectorsize -S %u"
      "!= -o bytes_per_sector %u",
      VAR_6->sectorsize, VAR_7->options.bytes_per_sector);
 }


 FUNC_14("Creating `%s'\n", VAR_3);
 FUNC_2(VAR_10);
 if (FUNC_8(VAR_3, ((void*)0), &VAR_7->options) == -1)
  return;
 FUNC_1(VAR_10, "mkfs_msdos");

 VAR_6->fd = FUNC_13(VAR_3, VAR_1);
 VAR_8.fs = VAR_6;

 VAR_12 = 0;
 if ((VAR_11 = FUNC_11(&VAR_8)) == ((void*)0))
  FUNC_6(1, "msdosfs_mount");

 if (FUNC_12(VAR_11, &VAR_9) != 0)
  FUNC_6(1, "msdosfs_root");

 if (VAR_2 & VAR_0)
  FUNC_14("msdos_makefs: image %s directory %s root %p\n",
      VAR_3, VAR_4, VAR_5);


 FUNC_14("Populating `%s'\n", VAR_3);
 FUNC_2(VAR_10);
 if (FUNC_9(VAR_4, FUNC_3(&VAR_9), VAR_5, VAR_5, VAR_6) == -1)
  FUNC_7(1, "Image file `%s' not created.", VAR_3);
 FUNC_1(VAR_10, "msdos_populate_dir");

 if (FUNC_10(VAR_11) != 0)
  FUNC_7(1, "Unable to update FSInfo block.");
 if (VAR_2 & VAR_0)
  FUNC_15('\n');


 if (VAR_2 & VAR_0)
  FUNC_5();

 FUNC_14("Image `%s' complete\n", VAR_3);
}
