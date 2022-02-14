
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* out_line ) (int ,TYPE_2__*,int) ;int priv; } ;
typedef TYPE_1__ xdemitcb_t ;
struct TYPE_6__ {char* ptr; long size; } ;
typedef TYPE_2__ mmbuffer_t ;


 long FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int) ;

int FUNC_2(char const *VAR_0, long VAR_1, char const *VAR_2, long VAR_3,
       xdemitcb_t *VAR_4) {
 int VAR_5 = 2;
 mmbuffer_t VAR_6[3];

 VAR_6[0].ptr = (char *) VAR_2;
 VAR_6[0].size = VAR_3;
 VAR_6[1].ptr = (char *) VAR_0;
 VAR_6[1].size = VAR_1;
 if (VAR_1 > 0 && VAR_0[VAR_1 - 1] != '\n') {
  VAR_6[2].ptr = (char *) "\n\\ No newline at end of file\n";
  VAR_6[2].size = FUNC_0(VAR_6[2].ptr);
  VAR_5++;
 }
 if (VAR_4->out_line(VAR_4->priv, VAR_6, VAR_5) < 0) {

  return -1;
 }

 return 0;
}
