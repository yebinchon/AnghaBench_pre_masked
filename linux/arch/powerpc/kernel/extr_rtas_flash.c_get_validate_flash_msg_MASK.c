
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_validate_flash_t {scalar_t__ status; scalar_t__ update_results; char* buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct rtas_validate_flash_t *VAR_2,
                     char *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2->status >= VAR_1) {
  VAR_5 = FUNC_1(VAR_3, "%d\n", VAR_2->update_results);
  if ((VAR_2->update_results >= VAR_0) ||
      (VAR_2->update_results == VAR_1))
   VAR_5 += FUNC_0(VAR_3 + VAR_5, VAR_4 - VAR_5, "%s\n",
     VAR_2->buf);
 } else {
  VAR_5 = FUNC_1(VAR_3, "%d\n", VAR_2->status);
 }
 return VAR_5;
}
