
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_3__ {int hash; } ;
struct TYPE_4__ {int sd_size; } ;
struct cache_entry {int ce_flags; int ce_mode; TYPE_1__ oid; TYPE_2__ ce_stat_data; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct cache_entry const*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (TYPE_2__*,struct stat*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(const struct cache_entry *VAR_7, struct stat *VAR_8)
{
 unsigned int VAR_9 = 0;

 if (VAR_7->ce_flags & VAR_0)
  return VAR_2 | VAR_1 | VAR_4;

 switch (VAR_7->ce_mode & VAR_3) {
 case 128:
  VAR_9 |= !FUNC_3(VAR_8->st_mode) ? VAR_4 : 0;



  if (VAR_6 &&
      (0100 & (VAR_7->ce_mode ^ VAR_8->st_mode)))
   VAR_9 |= VAR_2;
  break;
 case 129:
  if (!FUNC_2(VAR_8->st_mode) &&
      (VAR_5 || !FUNC_3(VAR_8->st_mode)))
   VAR_9 |= VAR_4;
  break;
 case 130:

  if (!FUNC_1(VAR_8->st_mode))
   VAR_9 |= VAR_4;
  else if (FUNC_4(VAR_7))
   VAR_9 |= VAR_1;
  return VAR_9;
 default:
  FUNC_0("unsupported ce_mode: %o", VAR_7->ce_mode);
 }

 VAR_9 |= FUNC_6(&VAR_7->ce_stat_data, VAR_8);


 if (!VAR_7->ce_stat_data.sd_size) {
  if (!FUNC_5(VAR_7->oid.hash))
   VAR_9 |= VAR_1;
 }

 return VAR_9;
}
