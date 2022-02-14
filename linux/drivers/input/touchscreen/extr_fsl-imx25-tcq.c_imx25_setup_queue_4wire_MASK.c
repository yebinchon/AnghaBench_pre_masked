
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mx25_tcq_priv {int expected_samples; int sample_count; int regs; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mx25_tcq_priv*,unsigned int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mx25_tcq_priv *VAR_5,
       unsigned VAR_6, int *VAR_7)
{
 FUNC_1(VAR_5, VAR_6);


 FUNC_2(VAR_5->regs, VAR_0,
       FUNC_0(0, VAR_1) |
       FUNC_0(1, VAR_2) |
       FUNC_0(2, VAR_3) |
       FUNC_0(3, VAR_4) |
       FUNC_0(4, VAR_1) |
       FUNC_0(5, VAR_2));





 VAR_5->expected_samples = VAR_5->sample_count * 2 + 2;
 *VAR_7 = 6;

 return 0;
}
