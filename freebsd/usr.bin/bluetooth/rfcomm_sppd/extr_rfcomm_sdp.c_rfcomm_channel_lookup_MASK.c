
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int member_2; scalar_t__ flags; scalar_t__ vlen; int value; int * member_3; int member_1; int member_0; } ;
typedef TYPE_1__ sdp_attr_t ;
typedef int buffer ;
typedef int bdaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;



 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *,int*,int*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 void* FUNC_8 (int const*,int const*) ;
 scalar_t__ FUNC_9 (void*,int,int *,int,scalar_t__*,int,TYPE_1__*) ;

int
FUNC_10(bdaddr_t const *VAR_12, bdaddr_t const *VAR_13,
   int VAR_14, int *VAR_15, int *VAR_16)
{
 uint8_t VAR_17[VAR_4];
 void *VAR_18 = ((void*)0);
 uint16_t VAR_19 = (uint16_t) VAR_14;
 uint32_t VAR_20 = FUNC_0(
     VAR_8,
     VAR_8);
 sdp_attr_t VAR_21 = { VAR_6,0,sizeof(VAR_17),VAR_17 };
 uint32_t VAR_22, VAR_23;

 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_3;
 if (VAR_13 == ((void*)0) || VAR_15 == ((void*)0))
  FUNC_4(VAR_0);

 if ((VAR_18 = FUNC_8(VAR_12, VAR_13)) == ((void*)0))
  FUNC_4(VAR_2);
 if (FUNC_7(VAR_18) != 0)
  FUNC_4(FUNC_7(VAR_18));

 if (FUNC_9(VAR_18, 1, &VAR_19, 1, &VAR_20, 1, &VAR_21) != 0)
  FUNC_4(FUNC_7(VAR_18));
 if (VAR_21.flags != VAR_7)
  FUNC_4(VAR_1);

 FUNC_6(VAR_18);
 VAR_18 = ((void*)0);
 if (VAR_21.vlen < VAR_5)
  FUNC_4(VAR_0);

 FUNC_3(VAR_22, VAR_21.value);

 if (VAR_22 == VAR_11) {
  FUNC_3(VAR_23, VAR_21.value);
 } else if (VAR_22 == VAR_9) {
  FUNC_1(VAR_23, VAR_21.value);
 } else if (VAR_22 == VAR_10) {
  FUNC_2(VAR_23, VAR_21.value);
 } else
  VAR_23 = 0;

 if (VAR_23 > 0)
  FUNC_3(VAR_22, VAR_21.value);

 switch (VAR_22) {
 case 128:
  FUNC_3(VAR_23, VAR_21.value);
  break;

 case 130:
  FUNC_1(VAR_23, VAR_21.value);
  break;

 case 129:
  FUNC_2(VAR_23, VAR_21.value);
  break;

 default:
  FUNC_4(VAR_1);

 }

 if (VAR_23 < VAR_5)
  FUNC_4(VAR_0);

 return (FUNC_5(VAR_21.value,
     VAR_17 + VAR_21.vlen, VAR_15, VAR_16));
}
