
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dctcp {int alpha; int bytes_total; int save_sndnxt; scalar_t__ bytes_ecn; } ;
struct cc_var {struct dctcp* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct cc_var *VAR_4)
{
 struct dctcp *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->cc_data;
 VAR_6 = VAR_5->alpha;
 VAR_5->bytes_total = FUNC_1(VAR_5->bytes_total, 1);
 VAR_5->alpha = FUNC_2(VAR_6 - (VAR_6 >> VAR_2) +
     ((uint64_t)VAR_5->bytes_ecn << (VAR_0 - VAR_2)) /
     VAR_5->bytes_total, VAR_1);


 VAR_5->bytes_ecn = 0;
 VAR_5->bytes_total = 0;
 VAR_5->save_sndnxt = FUNC_0(VAR_4, VAR_3);
}
