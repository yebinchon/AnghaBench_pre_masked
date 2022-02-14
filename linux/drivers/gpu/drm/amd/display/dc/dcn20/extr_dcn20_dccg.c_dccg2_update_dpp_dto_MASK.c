
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn_dccg {int dummy; } ;
struct dccg {int ref_dppclk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ,int*,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct dcn_dccg* FUNC_4 (struct dccg*) ;

void FUNC_5(struct dccg *VAR_5,
  int VAR_6,
  int VAR_7,
  bool VAR_8)
{
 struct dcn_dccg *VAR_9 = FUNC_4(VAR_5);

 if (VAR_5->ref_dppclk && VAR_7) {
  int VAR_10 = VAR_5->ref_dppclk;
  int VAR_11, VAR_12;

  FUNC_0(VAR_7 <= VAR_10);

  if (VAR_10 > 0xff) {
   int VAR_13 = (VAR_10 + 0xfe) / 0xff;

   VAR_10 /= VAR_13;
   VAR_7 = (VAR_7 + VAR_13 - 1) / VAR_13;
   if (VAR_7 > VAR_10)
    VAR_7 = VAR_10;
  }

  FUNC_1(VAR_4[VAR_6],
    VAR_1, &VAR_11,
    VAR_0, &VAR_12);

  if (VAR_8) {

   if (VAR_7 * VAR_12 >= VAR_11 * VAR_10) {
    FUNC_2(VAR_4[VAR_6], 0,
      VAR_1, VAR_7,
      VAR_0, VAR_10);
   } else {
    FUNC_2(VAR_4[VAR_6], 0,
      VAR_1, VAR_11,
      VAR_0, VAR_12);
   }
  } else {
   FUNC_2(VAR_4[VAR_6], 0,
     VAR_1, VAR_7,
     VAR_0, VAR_10);
  }

  FUNC_3(VAR_2,
    VAR_3[VAR_6], 1);
 } else {
  FUNC_3(VAR_2,
    VAR_3[VAR_6], 0);
 }
}
