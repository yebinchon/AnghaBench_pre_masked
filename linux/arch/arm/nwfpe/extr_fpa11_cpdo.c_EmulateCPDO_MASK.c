
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct roundingData {scalar_t__ exception; int precision; int mode; } ;
struct TYPE_8__ {unsigned int* fType; TYPE_1__* fpreg; } ;
struct TYPE_7__ {void* fSingle; void* fDouble; int fExtended; } ;
typedef TYPE_1__ FPREG ;
typedef TYPE_2__ FPA11 ;


 int FUNC_0 (unsigned int const) ;
 unsigned int FUNC_1 (struct roundingData*,unsigned int const,TYPE_1__*) ;
 unsigned int FUNC_2 (struct roundingData*,unsigned int const,TYPE_1__*) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int const) ;
 int FUNC_5 (unsigned int const) ;
 int FUNC_6 (unsigned int const) ;
 unsigned int FUNC_7 (struct roundingData*,unsigned int const,TYPE_1__*) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (struct roundingData*,void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (scalar_t__) ;
 void* FUNC_13 (struct roundingData*,int ) ;
 void* FUNC_14 (struct roundingData*,int ) ;
 unsigned int FUNC_15 (unsigned int const) ;
 size_t FUNC_16 (unsigned int const) ;
 unsigned int FUNC_17 (unsigned int const) ;
 size_t FUNC_18 (unsigned int const) ;


 unsigned int VAR_0 ;


unsigned int FUNC_19(const unsigned int VAR_1)
{
 FPA11 *VAR_2 = FUNC_3();
 FPREG *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;
 struct roundingData VAR_7;



 VAR_5 = FUNC_15(VAR_1);
 if (VAR_0 == VAR_5)
  return 0;

 VAR_7.mode = FUNC_5(VAR_1);
 VAR_7.precision = FUNC_6(VAR_1);
 VAR_7.exception = 0;






 if (FUNC_4(VAR_1))
  VAR_4 = VAR_5;
 else
  VAR_4 = VAR_2->fType[FUNC_18(VAR_1)];

 if (!FUNC_0(VAR_1)) {
  register unsigned int VAR_8 = FUNC_17(VAR_1);
  if (VAR_4 < VAR_2->fType[VAR_8]) {
   VAR_4 = VAR_2->fType[VAR_8];
  }
 }

 VAR_3 = &VAR_2->fpreg[FUNC_16(VAR_1)];

 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_7(&VAR_7, VAR_1, VAR_3);
  break;
 case 130:
  VAR_6 = FUNC_1(&VAR_7, VAR_1, VAR_3);
  break;





 default:
  VAR_6 = 0;
 }




 if (VAR_6 != 0) {




  VAR_2->fType[FUNC_16(VAR_1)] = VAR_5;
  if (VAR_5 != VAR_4) {
   if (VAR_5 == 128)
    VAR_3->fSingle = FUNC_10(&VAR_7, VAR_3->fDouble);
   else
    VAR_3->fDouble = FUNC_8(VAR_3->fSingle);
  }

 }

 if (VAR_7.exception)
  FUNC_12(VAR_7.exception);

 return VAR_6;
}
