
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sca3000_state*,int ) ;
 int FUNC_3 (struct sca3000_state*,int ,int) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct sca3000_state *VAR_14)
{
 int VAR_15;

 FUNC_0(&VAR_14->lock);

 VAR_15 = FUNC_3(VAR_14, VAR_7, 1);
 if (VAR_15)
  goto error_ret;


 VAR_15 = FUNC_2(VAR_14, VAR_2);
 if (VAR_15 < 0)
  goto error_ret;
 VAR_15 = FUNC_4(VAR_14, VAR_2,
         VAR_15 & VAR_0);
 if (VAR_15)
  goto error_ret;


 VAR_15 = FUNC_2(VAR_14, VAR_3);
 if (VAR_15 < 0)
  goto error_ret;
 VAR_15 = FUNC_4(VAR_14, VAR_3,
         (VAR_15 & VAR_13)
         | VAR_10
         | VAR_11
         | VAR_12
         | VAR_9);
 if (VAR_15)
  goto error_ret;

 VAR_15 = FUNC_3(VAR_14, VAR_5, 1);
 if (VAR_15)
  goto error_ret;
 VAR_15 = FUNC_5(VAR_14,
    VAR_5,
    (VAR_15 & VAR_6)
    | VAR_4);
 if (VAR_15)
  goto error_ret;





 VAR_15 = FUNC_3(VAR_14, VAR_8, 1);
 if (VAR_15)
  goto error_ret;
 VAR_15 = FUNC_5(VAR_14, VAR_8,
    (VAR_14->rx[0] & VAR_1));

error_ret:
 FUNC_1(&VAR_14->lock);
 return VAR_15;
}
