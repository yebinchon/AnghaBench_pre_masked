
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;
struct ktr_genio {int ktr_fd; scalar_t__ ktr_rw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int ,struct winsize*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,char*,int,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,int,int) ;

void
FUNC_5(struct ktr_genio *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_7 - sizeof (struct ktr_genio);
 char *VAR_9 = (char *)VAR_6 + sizeof (struct ktr_genio);
 static int VAR_10 = 0;
 int VAR_11, VAR_12;

 FUNC_3("fd %d %s %d byte%s\n", VAR_6->ktr_fd,
  VAR_6->ktr_rw == VAR_1 ? "read" : "wrote", VAR_8,
  VAR_8 == 1 ? "" : "s");
 if (VAR_5)
  return;
 if (VAR_10 == 0) {
  struct winsize VAR_13;

  if (VAR_2 && FUNC_2(FUNC_0(VAR_4), VAR_0, &VAR_13) != -1 &&
      VAR_13.ws_col > 8)
   VAR_10 = VAR_13.ws_col;
  else
   VAR_10 = 80;
 }
 if (VAR_3 && VAR_8 > VAR_3)
  VAR_8 = VAR_3;

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_8 && VAR_12 == 0; VAR_11++) {
  if (VAR_9[VAR_11] >= 32 && VAR_9[VAR_11] < 127)
   continue;
  if (VAR_9[VAR_11] == 10 || VAR_9[VAR_11] == 13 || VAR_9[VAR_11] == 0 || VAR_9[VAR_11] == 9)
   continue;
  VAR_12 = 1;
 }
 if (VAR_12)
  FUNC_1(VAR_9, VAR_8, VAR_10);
 else
  FUNC_4(VAR_9, VAR_8, VAR_10);
}
