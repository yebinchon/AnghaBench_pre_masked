
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_6__ {TYPE_1__* items; } ;
struct rev_info {int diffopt; TYPE_3__ prune_data; } ;
struct object_array_entry {char const* path; TYPE_2__* item; int mode; } ;
struct TYPE_5__ {int oid; } ;
struct TYPE_4__ {char* match; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int VAR_4 ;
 int FUNC_11 (int *,int ,int ,int *,int *,int,int ,char const*,char const*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct rev_info *VAR_5,
       int VAR_6, const char **VAR_7,
       struct object_array_entry **VAR_8)
{

 struct stat VAR_9;
 const char *VAR_10;

 if (VAR_6 > 1)
  FUNC_12(VAR_3);

 FUNC_0(&VAR_5->prune_data, VAR_0 | VAR_1);
 VAR_10 = VAR_5->prune_data.items[0].match;

 if (FUNC_10(VAR_10, &VAR_9))
  FUNC_6(FUNC_3("failed to stat '%s'"), VAR_10);
 if (!(FUNC_2(VAR_9.st_mode) || FUNC_1(VAR_9.st_mode)))
  FUNC_5(FUNC_3("'%s': not a regular file or symlink"), VAR_10);

 FUNC_8(&VAR_5->diffopt, "o/", "w/");

 if (VAR_8[0]->mode == VAR_2)
  VAR_8[0]->mode = FUNC_4(VAR_9.st_mode);

 FUNC_11(&VAR_5->diffopt,
       VAR_8[0]->mode, FUNC_4(VAR_9.st_mode),
       &VAR_8[0]->item->oid, &VAR_4,
       1, 0,
       VAR_8[0]->path ? VAR_8[0]->path : VAR_10,
       VAR_10);
 FUNC_9(&VAR_5->diffopt);
 FUNC_7(&VAR_5->diffopt);
 return 0;
}
