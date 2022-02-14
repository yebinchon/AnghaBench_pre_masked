
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;

u16 FUNC_8(enum usnic_transport_type VAR_5, u16 VAR_6)
{
 if (VAR_5 == VAR_1) {
  FUNC_2(&VAR_3);
  if (!VAR_6) {
   VAR_6 = FUNC_0(VAR_2,
      VAR_0,
      VAR_4 ,
      1 ,
      0 );
   VAR_4 = (VAR_6 & 4095) + 1;
  } else if (FUNC_4(VAR_6, VAR_2)) {
   FUNC_6("Failed to allocate port for %s\n",
     FUNC_7(VAR_5));
   FUNC_3(&VAR_3);
   goto out_fail;
  }
  FUNC_1(VAR_2, VAR_6, 1);
  FUNC_3(&VAR_3);
 } else {
  FUNC_6("Failed to allocate port - transport %s unsupported\n",
    FUNC_7(VAR_5));
  goto out_fail;
 }

 FUNC_5("Allocating port %hu for %s\n", VAR_6,
   FUNC_7(VAR_5));
 return VAR_6;

out_fail:
 return 0;
}
