
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_timeline {int lock; int pt_list; int pt_tree; int name; int context; int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct sync_timeline* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (struct sync_timeline*) ;

__attribute__((used)) static struct sync_timeline *FUNC_7(const char *VAR_2)
{
 struct sync_timeline *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->kref);
 VAR_3->context = FUNC_1(1);
 FUNC_5(VAR_3->name, VAR_2, sizeof(VAR_3->name));

 VAR_3->pt_tree = VAR_1;
 FUNC_0(&VAR_3->pt_list);
 FUNC_4(&VAR_3->lock);

 FUNC_6(VAR_3);

 return VAR_3;
}
