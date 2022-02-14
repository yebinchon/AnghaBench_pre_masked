
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_10__ {int cs_nffree; int cs_nifree; int cs_nbfree; int cs_ndir; } ;
struct TYPE_9__ {int cs_nffree; int cs_nifree; int cs_nbfree; int cs_ndir; } ;
struct fs {TYPE_2__ fs_cstotal; TYPE_1__ fs_old_cstotal; scalar_t__ fs_fmod; } ;
typedef int fsnode ;
struct TYPE_11__ {int fd; struct fs* superblock; int curinode; scalar_t__ inodes; scalar_t__ size; } ;
typedef TYPE_3__ fsinfo_t ;


 int VAR_0 ;
 int FUNC_0 (struct timeval,char*) ;
 int FUNC_1 (struct timeval) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int,char*,char const*) ;
 int FUNC_6 (int,char*,char const*) ;
 int FUNC_7 (char const*,TYPE_3__*) ;
 int FUNC_8 (char const*,int *,TYPE_3__*) ;
 int FUNC_9 (char const*,int *,TYPE_3__*) ;
 int FUNC_10 (struct fs*,TYPE_3__*) ;
 int FUNC_11 (char*,char const*,...) ;
 int FUNC_12 (char) ;

void
FUNC_13(const char *VAR_3, const char *VAR_4, fsnode *VAR_5, fsinfo_t *VAR_6)
{
 struct fs *VAR_7;
 struct timeval VAR_8;

 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_5 != ((void*)0));
 FUNC_2(VAR_6 != ((void*)0));

 if (VAR_2 & VAR_0)
  FUNC_11("ffs_makefs: image %s directory %s root %p\n",
      VAR_3, VAR_4, VAR_5);


 FUNC_1(VAR_8);
 FUNC_9(VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_8, "ffs_validate");

 FUNC_11("Calculated size of `%s': %lld bytes, %lld inodes\n",
     VAR_3, (long long)VAR_6->size, (long long)VAR_6->inodes);


 FUNC_1(VAR_8);
 if (FUNC_7(VAR_3, VAR_6) == -1)
  FUNC_6(1, "Image file `%s' not created.", VAR_3);
 FUNC_0(VAR_8, "ffs_create_image");

 VAR_6->curinode = VAR_1;

 if (VAR_2 & VAR_0)
  FUNC_12('\n');


 FUNC_11("Populating `%s'\n", VAR_3);
 FUNC_1(VAR_8);
 if (! FUNC_8(VAR_4, VAR_5, VAR_6))
  FUNC_6(1, "Image file `%s' not populated.", VAR_3);
 FUNC_0(VAR_8, "ffs_populate_dir");


 if (VAR_2 & VAR_0)
  FUNC_3();


 VAR_7 = VAR_6->superblock;
 VAR_7->fs_fmod = 0;
 VAR_7->fs_old_cstotal.cs_ndir = VAR_7->fs_cstotal.cs_ndir;
 VAR_7->fs_old_cstotal.cs_nbfree = VAR_7->fs_cstotal.cs_nbfree;
 VAR_7->fs_old_cstotal.cs_nifree = VAR_7->fs_cstotal.cs_nifree;
 VAR_7->fs_old_cstotal.cs_nffree = VAR_7->fs_cstotal.cs_nffree;


 FUNC_10(VAR_6->superblock, VAR_6);
 if (FUNC_4(VAR_6->fd) == -1)
  FUNC_5(1, "Closing `%s'", VAR_3);
 VAR_6->fd = -1;
 FUNC_11("Image `%s' complete\n", VAR_3);
}
