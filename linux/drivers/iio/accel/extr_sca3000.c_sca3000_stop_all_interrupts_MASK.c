
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sca3000_state*,int ,int) ;
 int FUNC_3 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sca3000_state *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->lock);
 VAR_5 = FUNC_2(VAR_4, VAR_0, 1);
 if (VAR_5)
  goto error_ret;
 VAR_5 = FUNC_3(VAR_4, VAR_0,
    (VAR_4->rx[0] &
     ~(VAR_3 |
       VAR_2 |
       VAR_1)));
error_ret:
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
