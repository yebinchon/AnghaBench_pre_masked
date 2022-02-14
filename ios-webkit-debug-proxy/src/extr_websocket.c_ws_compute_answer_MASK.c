
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sha1_context ;


 scalar_t__ FUNC_0 (unsigned char*,size_t*,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,size_t) ;
 int FUNC_6 (char*,char*,char const*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_0) {
  if (!VAR_0) {
    return ((void*)0);
  }


  static char *VAR_1 = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
  size_t VAR_2 = (FUNC_7(VAR_0) + FUNC_7(VAR_1) + 1);
  char *VAR_3 = (char *)FUNC_2(VAR_2 * sizeof(char));
  if (!VAR_3) {
    return ((void*)0);
  }
  FUNC_6(VAR_3, "%s%s", VAR_0, VAR_1);


  unsigned char VAR_4[20];
  sha1_context VAR_5;
  FUNC_4(&VAR_5);
  FUNC_5(&VAR_5, (const unsigned char *)VAR_3, VAR_2-1);
  FUNC_3(&VAR_5, VAR_4);
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);


  size_t VAR_6 = 0;
  FUNC_0(((void*)0), &VAR_6, ((void*)0), 20);
  char *VAR_7 = (char *)FUNC_2(VAR_6);
  if (!VAR_7) {
    return ((void*)0);
  }
  if (FUNC_0((unsigned char *)VAR_7, &VAR_6, VAR_4, 20)) {
    FUNC_1(VAR_7);
    return ((void*)0);
  }

  return VAR_7;
}
