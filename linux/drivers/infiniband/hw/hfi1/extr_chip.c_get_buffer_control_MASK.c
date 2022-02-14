
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct hfi1_devdata {int dummy; } ;
struct buffer_control {int overall_shared_limit; int * vl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_control*,int ,int) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 int FUNC_3 (struct hfi1_devdata*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_8,
         struct buffer_control *VAR_9, u16 *VAR_10)
{
 u64 VAR_11;
 int VAR_12;


 FUNC_1(VAR_9, 0, sizeof(*VAR_9));


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_3(VAR_8, VAR_0 + (8 * VAR_12), &VAR_9->vl[VAR_12]);


 FUNC_3(VAR_8, VAR_1, &VAR_9->vl[15]);

 VAR_11 = FUNC_2(VAR_8, VAR_2);
 VAR_9->overall_shared_limit = FUNC_0(
  (VAR_11 >> VAR_4)
  & VAR_3);
 if (VAR_10)
  *VAR_10 = (VAR_11
   >> VAR_6)
   & VAR_5;
 return sizeof(struct buffer_control);
}
