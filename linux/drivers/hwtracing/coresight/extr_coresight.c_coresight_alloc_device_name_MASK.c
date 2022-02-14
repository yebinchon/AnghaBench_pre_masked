
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct coresight_dev_list {int nr_idx; int pfx; struct fwnode_handle** fwnode_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fwnode_handle**) ;
 int VAR_2 ;
 int FUNC_1 (struct coresight_dev_list*,struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_2 (struct device*) ;
 char* FUNC_3 (struct device*,int ,char*,int ,int) ;
 struct fwnode_handle** FUNC_4 (struct fwnode_handle**,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

char *FUNC_7(struct coresight_dev_list *VAR_3,
      struct device *VAR_4)
{
 int VAR_5;
 char *VAR_6 = ((void*)0);
 struct fwnode_handle **VAR_7;

 FUNC_5(&VAR_2);

 VAR_5 = FUNC_1(VAR_3, FUNC_2(VAR_4));
 if (VAR_5 < 0) {

  VAR_5 = VAR_3->nr_idx;
  VAR_7 = FUNC_4(VAR_3->fwnode_list,
    (VAR_5 + 1) * sizeof(*VAR_3->fwnode_list),
    VAR_1);
  if (FUNC_0(VAR_7)) {
   VAR_5 = -VAR_0;
   goto done;
  }

  VAR_7[VAR_5] = FUNC_2(VAR_4);
  VAR_3->fwnode_list = VAR_7;
  VAR_3->nr_idx = VAR_5 + 1;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_1, "%s%d", VAR_3->pfx, VAR_5);
done:
 FUNC_6(&VAR_2);
 return VAR_6;
}
