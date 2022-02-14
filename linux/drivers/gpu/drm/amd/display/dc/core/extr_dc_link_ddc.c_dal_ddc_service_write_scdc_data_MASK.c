
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int write_buffer ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ddc_service {int dummy; } ;
typedef int sink_version ;
typedef int offset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddc_service*,int,int*,int,int*,int) ;

void FUNC_1(struct ddc_service *VAR_4,
  uint32_t VAR_5,
  bool VAR_6)
{
 bool VAR_7 = VAR_5 > 340000 ? 1 : 0;
 uint8_t VAR_8 = VAR_0;
 uint8_t VAR_9 = VAR_1;
 uint8_t VAR_10 = 0;
 uint8_t VAR_11[2] = {0};


 FUNC_0(VAR_4, VAR_8, &VAR_9,
   sizeof(VAR_9), &VAR_10, sizeof(VAR_10));
 if (VAR_10 == 1) {

  VAR_11[0] = VAR_2;
  VAR_11[1] = 1;
  FUNC_0(VAR_4, VAR_8,
    VAR_11, sizeof(VAR_11), ((void*)0), 0);

 }
 VAR_11[0] = VAR_3;

 if (VAR_7) {
  VAR_11[1] = 3;
 } else if (VAR_6) {
  VAR_11[1] = 1;
 } else {
  VAR_11[1] = 0;
 }
 FUNC_0(VAR_4, VAR_8, VAR_11,
   sizeof(VAR_11), ((void*)0), 0);
}
