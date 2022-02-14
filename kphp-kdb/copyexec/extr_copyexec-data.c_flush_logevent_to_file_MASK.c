
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffered_logevent {unsigned int* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (int*,unsigned int*,int) ;
 int FUNC_4 (int,char*,int,int ,char*) ;
 int FUNC_5 (int ,unsigned int*,int) ;

__attribute__((used)) static void FUNC_6 (struct buffered_logevent *VAR_4) {
  int VAR_5;
  FUNC_3 (&VAR_5, VAR_4->data, 4);
  unsigned VAR_6 = FUNC_1 (VAR_4->data + 8, VAR_5);
  FUNC_3 (VAR_4->data + 4, &VAR_6, 4);
  VAR_5 += 8;
  int VAR_7;
  do {
    VAR_7 = FUNC_5 (VAR_3, VAR_4->data, VAR_5);
  } while (VAR_7 < 0 && VAR_2 == VAR_0);
  FUNC_0 (VAR_7 == VAR_5);
  FUNC_4 (3, "%d bytes to logevent file from tr%d was written (%.4s)\n", VAR_5, VAR_1, ((char *) VAR_4->data) + 8);
  FUNC_2 (VAR_4->data);
  VAR_4->data = ((void*)0);
}
