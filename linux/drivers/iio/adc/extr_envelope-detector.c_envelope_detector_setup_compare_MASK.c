
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct envelope {int level; int high; int low; int dac_max; int done; int comp_interval; int comp_timeout; int dac; scalar_t__ invert; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct envelope*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct envelope *VAR_0)
{
 int VAR_1;
 VAR_0->level = (VAR_0->high + VAR_0->low + !VAR_0->invert) / 2;

 if (VAR_0->high == VAR_0->low + 1) {
  FUNC_0(&VAR_0->done);
  return;
 }


 VAR_1 = FUNC_2(VAR_0->dac, VAR_0->invert ? 0 : VAR_0->dac_max);
 if (VAR_1 < 0)
  goto err;


 FUNC_1(VAR_0);


 VAR_1 = FUNC_2(VAR_0->dac, VAR_0->level);
 if (VAR_1 < 0)
  goto err;


 FUNC_4(&VAR_0->comp_timeout,
         FUNC_3(VAR_0->comp_interval));
 return;

err:
 VAR_0->level = VAR_1;
 FUNC_0(&VAR_0->done);
}
