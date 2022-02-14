
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int comm; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,int,unsigned int,unsigned int,int,int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (char*,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(u8 **VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned int VAR_5, u8 VAR_6,
  bool VAR_7, bool VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 u8 VAR_11;
 u8 VAR_12;
 u8 *VAR_13;
 unsigned int VAR_14 = VAR_5;

 for (; (VAR_13 = *VAR_2); VAR_2++) {
  VAR_5 = VAR_14;
  for (VAR_9 = VAR_3; VAR_9 < VAR_4; VAR_9++) {
   VAR_11 = VAR_13[VAR_9];
   VAR_12 = VAR_6 | FUNC_1(VAR_5, VAR_8);
   if (VAR_11 != VAR_12) {
    if (VAR_10 < VAR_0)
     FUNC_0(VAR_11, VAR_6, VAR_9,
        VAR_5, VAR_7,
        VAR_8);
    VAR_10++;
   }
   VAR_5++;
  }
 }

 if (VAR_10 > VAR_0)
  FUNC_2("%s: %u errors suppressed\n",
   VAR_1->comm, VAR_10 - VAR_0);

 return VAR_10;
}
