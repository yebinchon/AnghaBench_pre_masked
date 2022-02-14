
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fs {scalar_t__ fs_magic; scalar_t__ fs_sblockloc; int fs_ncg; scalar_t__ fs_bsize; scalar_t__ fs_sbsize; int fs_flags; int fs_ckhash; int fs_fmod; int * fs_csp; scalar_t__ fs_sblockactualloc; scalar_t__ fs_metackhash; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct fs*) ;
 int FUNC_1 (char*,int,int,char*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (void*,scalar_t__,void**,int) ;
 int FUNC_4 (char*,int,int,char*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_12, struct fs **VAR_13, off_t VAR_14, int VAR_15,
    int VAR_16, int (*VAR_17)(void *VAR_18, off_t VAR_19, void **VAR_20, int VAR_21))
{
 struct fs *VAR_22;
 int VAR_23, VAR_24;
 uint32_t VAR_25;

 VAR_23 = (*VAR_17)(VAR_12, VAR_14, (void **)VAR_13, VAR_10);
 if (VAR_23 != 0)
  return (VAR_23);
 VAR_22 = *VAR_13;
 if (VAR_22->fs_magic == VAR_3)
  return (VAR_1);
 if (((VAR_22->fs_magic == VAR_6 && (VAR_15 ||
       VAR_14 <= VAR_11)) ||
      (VAR_22->fs_magic == VAR_7 && (VAR_15 ||
       VAR_14 == VAR_22->fs_sblockloc))) &&
     VAR_22->fs_ncg >= 1 &&
     VAR_22->fs_bsize >= VAR_9 &&
     VAR_22->fs_bsize <= VAR_8 &&
     VAR_22->fs_bsize >= FUNC_2(sizeof(struct fs), VAR_0) &&
     VAR_22->fs_sbsize <= VAR_10) {




  if ((VAR_22->fs_flags & VAR_4) == 0)
   VAR_22->fs_metackhash = 0;
  if (VAR_22->fs_ckhash != (VAR_25 = FUNC_0(VAR_22))) {






   VAR_24 = 0;





   if (VAR_24 == 0)
    FUNC_1("Superblock check-hash failed: recorded "
        "check-hash 0x%x != computed check-hash "
        "0x%x%s\n", VAR_22->fs_ckhash, VAR_25,
        VAR_16 == 0 ? " (Ignored)" : "");
   if (VAR_16 == 0) {
    VAR_22->fs_flags |= VAR_5;
    VAR_22->fs_fmod = 1;
    return (0);
   }
   VAR_22->fs_fmod = 0;
   return (VAR_1);
  }

  VAR_22->fs_sblockactualloc = VAR_14;

  VAR_22->fs_csp = ((void*)0);
  return (0);
 }
 return (VAR_2);
}
