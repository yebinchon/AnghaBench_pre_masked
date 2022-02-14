
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dctcp {int save_sndnxt; } ;
struct cc_var {struct dctcp* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct cc_var *VAR_3)
{
 struct dctcp *VAR_4;

 VAR_4 = VAR_3->cc_data;

 if (FUNC_0(VAR_3, VAR_2) & VAR_0)
  VAR_4->save_sndnxt = FUNC_0(VAR_3, VAR_1);
}
