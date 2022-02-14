
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;
struct pgpath {TYPE_2__ path; int activate_path; } ;
struct path_selector {TYPE_1__* type; } ;
struct multipath {scalar_t__ hw_handler_name; } ;
struct dm_target {char* error; int table; struct multipath* private; } ;
struct dm_arg_set {int argc; int argv; } ;
struct TYPE_7__ {int bdev; } ;
struct TYPE_5__ {int (* add_path ) (struct path_selector*,TYPE_2__*,int,int ,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct pgpath* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 struct pgpath* FUNC_2 () ;
 struct request_queue* FUNC_3 (int ) ;
 int FUNC_4 (struct dm_target*,int ,int ,TYPE_3__**) ;
 int FUNC_5 (struct dm_target*,TYPE_3__*) ;
 int FUNC_6 (struct dm_arg_set*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pgpath*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (struct request_queue*,int ) ;
 int FUNC_11 (int ,struct multipath*,char const**,char**) ;
 int FUNC_12 (struct path_selector*,TYPE_2__*,int,int ,char**) ;

__attribute__((used)) static struct pgpath *FUNC_13(struct dm_arg_set *VAR_4, struct path_selector *VAR_5,
     struct dm_target *VAR_6)
{
 int VAR_7;
 struct pgpath *VAR_8;
 struct multipath *VAR_9 = VAR_6->private;
 struct request_queue *VAR_10;
 const char *VAR_11 = ((void*)0);


 if (VAR_4->argc < 1) {
  VAR_6->error = "no device given";
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_2();
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_4(VAR_6, FUNC_6(VAR_4), FUNC_7(VAR_6->table),
     &VAR_8->path.dev);
 if (VAR_7) {
  VAR_6->error = "error getting device";
  goto bad;
 }

 VAR_10 = FUNC_3(VAR_8->path.dev->bdev);
 VAR_11 = FUNC_10(VAR_10, VAR_2);
 if (VAR_11 || VAR_9->hw_handler_name) {
  FUNC_1(&VAR_8->activate_path, VAR_3);
  VAR_7 = FUNC_11(VAR_8->path.dev->bdev, VAR_9, &VAR_11, &VAR_6->error);
  FUNC_9(VAR_11);
  if (VAR_7) {
   FUNC_5(VAR_6, VAR_8->path.dev);
   goto bad;
  }
 }

 VAR_7 = VAR_5->type->add_path(VAR_5, &VAR_8->path, VAR_4->argc, VAR_4->argv, &VAR_6->error);
 if (VAR_7) {
  FUNC_5(VAR_6, VAR_8->path.dev);
  goto bad;
 }

 return VAR_8;
 bad:
 FUNC_8(VAR_8);
 return FUNC_0(VAR_7);
}
