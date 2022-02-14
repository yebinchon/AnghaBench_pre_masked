
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int (* get_port_immutable ) (struct ib_device*,int,int *) ;int * port_immutable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct ib_device*,int,int *) ;
 scalar_t__ FUNC_4 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = FUNC_2(VAR_3);
 u8 VAR_6 = FUNC_1(VAR_3);
 u8 VAR_7;
 VAR_3->port_immutable = FUNC_0(sizeof(*VAR_3->port_immutable)
      * (VAR_6 + 1),
      VAR_2);
 if (!VAR_3->port_immutable)
  return -VAR_1;

 for (VAR_7 = VAR_5; VAR_7 <= VAR_6; ++VAR_7) {
  VAR_4 = VAR_3->get_port_immutable(VAR_3, VAR_7,
       &VAR_3->port_immutable[VAR_7]);
  if (VAR_4)
   return VAR_4;

  if (FUNC_4(VAR_3, VAR_7))
   return -VAR_0;
 }
 return 0;
}
