
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct lock_file {int dummy; } ;


 int VAR_0 ;
 struct lock_file VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct strbuf VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lock_file*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct lock_file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lock_file*,int ,int ) ;
 int FUNC_6 (struct lock_file*) ;
 int FUNC_7 (struct strbuf*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,int ,int ) ;
 scalar_t__ FUNC_10 (struct strbuf*,int ,int *,unsigned int) ;

void FUNC_11(unsigned VAR_9)
{
 struct lock_file VAR_10 = VAR_1;
 struct strbuf VAR_11 = VAR_6;
 unsigned VAR_12 = VAR_5;
 int VAR_13;

 if (VAR_9 & VAR_2)
  VAR_12 |= VAR_4;

 if (VAR_9 & VAR_3) {
  VAR_12 |= VAR_7;
  FUNC_10(&VAR_11, 0, ((void*)0), VAR_12);
  FUNC_7(&VAR_11);
  return;
 }
 VAR_13 = FUNC_5(&VAR_10,
           FUNC_4(VAR_8),
           VAR_0);
 FUNC_0(VAR_8);
 if (FUNC_10(&VAR_11, 0, ((void*)0), VAR_12)) {
  if (FUNC_9(VAR_13, VAR_11.buf, VAR_11.len) < 0)
   FUNC_2("failed to write to %s",
      FUNC_3(&VAR_10));
  FUNC_1(&VAR_10);
 } else {
  FUNC_8(FUNC_4(VAR_8));
  FUNC_6(&VAR_10);
 }
 FUNC_7(&VAR_11);
}
