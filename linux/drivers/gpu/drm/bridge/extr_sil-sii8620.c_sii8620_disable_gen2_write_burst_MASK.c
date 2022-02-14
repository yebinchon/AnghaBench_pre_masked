
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {scalar_t__ gen2_write_burst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sii8620*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sii8620 *VAR_2)
{
 if (!VAR_2->gen2_write_burst)
  return;

 FUNC_0(VAR_2,
  VAR_1, 0,
  VAR_0, 0
 );
 VAR_2->gen2_write_burst = 0;
}
