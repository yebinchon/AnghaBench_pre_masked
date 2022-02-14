
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int address; unsigned char dor; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int select_date; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int,unsigned char) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char,int ) ;
 scalar_t__ FUNC_4 (unsigned char,unsigned char) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(int VAR_5, char VAR_6, char VAR_7)
{
 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned char VAR_11;

 if (VAR_0->address == -1)
  return -1;

 VAR_11 = VAR_0->dor;
 VAR_10 = (VAR_11 & VAR_6) | VAR_7;
 if (VAR_10 != VAR_11) {
  VAR_8 = VAR_11 & 0x3;
  if (FUNC_4(VAR_11, VAR_8) && !FUNC_4(VAR_10, VAR_8)) {
   VAR_9 = FUNC_0(VAR_5, VAR_8);
   FUNC_1(VAR_2->flags,
      "calling disk change from set_dor\n");
   FUNC_2(VAR_9);
  }
  VAR_0->dor = VAR_10;
  FUNC_3(VAR_10, VAR_1);

  VAR_8 = VAR_10 & 0x3;
  if (!FUNC_4(VAR_11, VAR_8) && FUNC_4(VAR_10, VAR_8)) {
   VAR_9 = FUNC_0(VAR_5, VAR_8);
   VAR_3->select_date = VAR_4;
  }
 }
 return VAR_11;
}
