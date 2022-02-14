
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_queue {int wait; } ;
struct nullb_cmd {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct nullb_cmd* FUNC_1 (struct nullb_queue*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct nullb_cmd *FUNC_5(struct nullb_queue *VAR_2, int VAR_3)
{
 struct nullb_cmd *VAR_4;
 FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 || !VAR_3)
  return VAR_4;

 do {
  FUNC_4(&VAR_2->wait, &VAR_1, VAR_0);
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   break;

  FUNC_3();
 } while (1);

 FUNC_2(&VAR_2->wait, &VAR_1);
 return VAR_4;
}
