
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sync_set; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int) ;
 struct bio* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct bio *FUNC_3(struct mddev *VAR_1)
{
 if (!VAR_1 || !FUNC_2(&VAR_1->sync_set))
  return FUNC_0(VAR_0, 1);

 return FUNC_1(VAR_0, 1, &VAR_1->sync_set);
}
