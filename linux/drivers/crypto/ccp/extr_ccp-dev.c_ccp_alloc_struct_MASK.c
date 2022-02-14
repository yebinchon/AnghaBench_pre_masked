
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int ord; int axcache; struct device* dev; } ;
struct device {int dummy; } ;
struct ccp_device {int rngname; int name; int suspend_queue; int sb_queue; scalar_t__ sb_start; int sb_count; int sb_mutex; int req_mutex; int cmd_lock; int backlog; int cmd; int axcache; struct sp_device* sp; struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ccp_device* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (int *) ;

struct ccp_device *FUNC_6(struct sp_device *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct ccp_device *VAR_5;

 VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_5->dev = VAR_4;
 VAR_5->sp = VAR_3;
 VAR_5->axcache = VAR_3->axcache;

 FUNC_0(&VAR_5->cmd);
 FUNC_0(&VAR_5->backlog);

 FUNC_5(&VAR_5->cmd_lock);
 FUNC_3(&VAR_5->req_mutex);
 FUNC_3(&VAR_5->sb_mutex);
 VAR_5->sb_count = VAR_1;
 VAR_5->sb_start = 0;


 FUNC_2(&VAR_5->sb_queue);
 FUNC_2(&VAR_5->suspend_queue);

 FUNC_4(VAR_5->name, VAR_2, "ccp-%u", VAR_3->ord);
 FUNC_4(VAR_5->rngname, VAR_2, "ccp-%u-rng", VAR_3->ord);

 return VAR_5;
}
