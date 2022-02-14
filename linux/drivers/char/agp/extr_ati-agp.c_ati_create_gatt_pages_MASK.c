
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ati_page_map {int dummy; } ;
struct TYPE_2__ {int num_tables; struct ati_page_map** gatt_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ati_page_map*) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 struct ati_page_map** FUNC_2 (int,int,int ) ;
 struct ati_page_map* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 struct ati_page_map **VAR_4;
 struct ati_page_map *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_3 + 1, sizeof(struct ati_page_map *),
    VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_5 = FUNC_3(sizeof(struct ati_page_map), VAR_1);
  VAR_4[VAR_7] = VAR_5;
  if (VAR_5 == ((void*)0)) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 != 0)
   break;
 }
 VAR_2.num_tables = VAR_7;
 VAR_2.gatt_pages = VAR_4;

 if (VAR_6 != 0)
  FUNC_1();

 return VAR_6;
}
