
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidraw {size_t minor; int hid; scalar_t__ exist; scalar_t__ open; int wait; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_4 (struct hidraw*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hidraw *VAR_4, int VAR_5)
{
 if (VAR_5) {
  VAR_4->exist = 0;
  if (VAR_4->open) {
   FUNC_2(VAR_4->hid);
   FUNC_5(&VAR_4->wait);
  }
  FUNC_1(VAR_1,
          FUNC_0(VAR_2, VAR_4->minor));
 } else {
  --VAR_4->open;
 }
 if (!VAR_4->open) {
  if (!VAR_4->exist) {
   VAR_3[VAR_4->minor] = ((void*)0);
   FUNC_4(VAR_4);
  } else {

   FUNC_2(VAR_4->hid);
   FUNC_3(VAR_4->hid, VAR_0);
  }
 }
}
