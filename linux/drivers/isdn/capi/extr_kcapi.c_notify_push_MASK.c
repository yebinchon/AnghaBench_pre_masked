
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct capictr_event {unsigned int type; int work; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct capictr_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_4, u32 VAR_5)
{
 struct capictr_event *VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_6->work, VAR_2);
 VAR_6->type = VAR_4;
 VAR_6->controller = VAR_5;

 FUNC_2(VAR_3, &VAR_6->work);
 return 0;
}
