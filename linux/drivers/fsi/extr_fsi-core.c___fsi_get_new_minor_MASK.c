
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_slave {int chip_id; } ;
typedef enum fsi_dev_type { ____Placeholder_fsi_dev_type } fsi_dev_type ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct fsi_slave *VAR_6, enum fsi_dev_type VAR_7,
          dev_t *VAR_8, int *VAR_9)
{
 int VAR_10 = VAR_6->chip_id;
 int VAR_11;


 if (VAR_10 >= 0 && VAR_10 < 16 && VAR_7 < 4) {

  VAR_11 = (VAR_10 << 4) | VAR_7;
  VAR_11 = FUNC_1(&VAR_5, VAR_11, VAR_11 + 1, VAR_3);
  if (VAR_11 >= 0) {
   *VAR_9 = FUNC_0(VAR_10);
   *VAR_8 = VAR_4 + VAR_11;
   return 0;
  }

  if (VAR_11 != -VAR_0)
   return VAR_11;

 }
 VAR_11 = FUNC_1(&VAR_5, VAR_1,
       VAR_2, VAR_3);
 if (VAR_11 < 0)
  return VAR_11;
 *VAR_9 = FUNC_0(VAR_11);
 *VAR_8 = VAR_4 + VAR_11;
 return 0;
}
