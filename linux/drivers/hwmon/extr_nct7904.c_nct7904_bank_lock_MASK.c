
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct7904_data {unsigned int bank_sel; int client; int bank_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct nct7904_data *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->bank_lock);
 if (VAR_1->bank_sel == VAR_2)
  return 0;
 VAR_3 = FUNC_0(VAR_1->client, VAR_0, VAR_2);
 if (VAR_3 == 0)
  VAR_1->bank_sel = VAR_2;
 else
  VAR_1->bank_sel = -1;
 return VAR_3;
}
