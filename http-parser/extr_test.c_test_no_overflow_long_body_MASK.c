
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int http_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char*,unsigned long) ;
 size_t FUNC_2 (int *,int *,char*,size_t) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 size_t FUNC_4 (char*,char*,char*,unsigned long) ;
 int VAR_3 ;

void
FUNC_5 (int VAR_4, size_t VAR_5)
{
  http_parser VAR_6;
  FUNC_3(&VAR_6, VAR_4 ? VAR_0 : VAR_1);
  size_t VAR_7;
  size_t VAR_8;
  char VAR_9[3000];
  size_t VAR_10 = FUNC_4(VAR_9, "%s\r\nConnection: Keep-Alive\r\nContent-Length: %lu\r\n\r\n",
      VAR_4 ? "POST / HTTP/1.0" : "HTTP/1.0 200 OK", (unsigned long)VAR_5);
  VAR_7 = FUNC_2(&VAR_6, &VAR_2, VAR_9, VAR_10);
  if (VAR_7 != VAR_10)
    goto err;

  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
    char VAR_11 = 'a';
    VAR_7 = FUNC_2(&VAR_6, &VAR_2, &VAR_11, 1);
    if (VAR_7 != 1)
      goto err;
  }

  VAR_7 = FUNC_2(&VAR_6, &VAR_2, VAR_9, VAR_10);
  if (VAR_7 != VAR_10) goto err;
  return;

 err:
  FUNC_1(VAR_3,
          "\n*** error in test_no_overflow_long_body %s of length %lu ***\n",
          VAR_4 ? "REQUEST" : "RESPONSE",
          (unsigned long)VAR_5);
  FUNC_0();
}
