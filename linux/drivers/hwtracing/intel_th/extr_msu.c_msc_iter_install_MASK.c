
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {int entry; struct msc* msc; } ;
struct msc {int buf_mutex; int iter_list; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msc_iter* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct msc_iter*) ;
 struct msc_iter* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct msc_iter *FUNC_6(struct msc *VAR_3)
{
 struct msc_iter *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 FUNC_4(&VAR_3->buf_mutex);







 if (VAR_3->enabled) {
  FUNC_1(VAR_4);
  VAR_4 = FUNC_0(-VAR_0);
  goto unlock;
 }

 VAR_4->msc = VAR_3;

 FUNC_3(&VAR_4->entry, &VAR_3->iter_list);
unlock:
 FUNC_5(&VAR_3->buf_mutex);

 return VAR_4;
}
