
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpv_file_node {int read; scalar_t__ length; int status; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct dpv_file_node*,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct dpv_file_node *VAR_8, int VAR_9)
{
 int VAR_10;
 ssize_t VAR_11, VAR_12;

 if (FUNC_4(VAR_8, VAR_9) < 0)
  return (-1);


 if ((VAR_11 = FUNC_5(VAR_6, VAR_4, VAR_3)) <= 0) {
  if (VAR_6 != VAR_2)
   FUNC_0(VAR_6);
  VAR_6 = -1;
  VAR_8->status = VAR_0;
  return (100);
 }


 if (VAR_9 >= 0) {
  if ((VAR_12 = FUNC_6(VAR_9, VAR_4, VAR_11)) < 0) {
   FUNC_1();
   FUNC_2(VAR_1, "output");
  }
  FUNC_3(VAR_9);
 }

 VAR_5 += VAR_11;
 VAR_8->read += VAR_11;


 if (VAR_8->length >= 0) {
  VAR_10 = (VAR_8->read * 100 / (VAR_8->length > 0 ?
      VAR_8->length : 1));


  if (VAR_7 && VAR_10 == 100 && VAR_8->read < VAR_8->length)
   VAR_10--;

  return (VAR_10);
 } else
  return (-1);
}
