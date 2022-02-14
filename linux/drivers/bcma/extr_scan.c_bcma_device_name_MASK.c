
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_device_id_name {scalar_t__ id; char const* name; } ;
struct bcma_device_id {int manuf; scalar_t__ id; } ;


 int FUNC_0 (struct bcma_device_id_name*) ;



 struct bcma_device_id_name* VAR_0 ;
 struct bcma_device_id_name* VAR_1 ;
 struct bcma_device_id_name* VAR_2 ;

__attribute__((used)) static const char *FUNC_1(const struct bcma_device_id *VAR_3)
{
 const struct bcma_device_id_name *VAR_4;
 int VAR_5, VAR_6;


 switch (VAR_3->manuf) {
 case 130:
  VAR_4 = VAR_0;
  VAR_5 = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_4 = VAR_1;
  VAR_5 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_4 = VAR_2;
  VAR_5 = FUNC_0(VAR_2);
  break;
 default:
  return "UNKNOWN";
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].id == VAR_3->id)
   return VAR_4[VAR_6].name;
 }

 return "UNKNOWN";
}
