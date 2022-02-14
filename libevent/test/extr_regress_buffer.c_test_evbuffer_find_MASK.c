
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*,unsigned char*,int) ;
 int FUNC_1 (struct evbuffer*,int) ;
 unsigned char* FUNC_2 (struct evbuffer*,unsigned char*,int) ;
 int FUNC_3 (struct evbuffer*) ;
 struct evbuffer* FUNC_4 () ;
 int FUNC_5 (struct evbuffer*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct evbuffer*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_1)
{
 unsigned char* VAR_2;
 const char* VAR_3 = "1234567890\r\n";
 const char* VAR_4 = "1234567890\r";

 char VAR_5[256];
 unsigned int VAR_6;
 struct evbuffer * VAR_7 = FUNC_4();

 FUNC_8(VAR_7);


 FUNC_0(VAR_7, (unsigned char*)VAR_3, FUNC_6(VAR_3));
 FUNC_5(VAR_7);
 FUNC_1(VAR_7, FUNC_6(VAR_3));
 FUNC_5(VAR_7);
 FUNC_0(VAR_7, (unsigned char*)VAR_4, FUNC_6(VAR_4));
 FUNC_5(VAR_7);
 VAR_2 = FUNC_2(VAR_7, (unsigned char*)"\r\n", 2);
 FUNC_9(VAR_2 == ((void*)0));





 FUNC_1(VAR_7, FUNC_6(VAR_4));
 FUNC_5(VAR_7);
 for (VAR_6 = 0; VAR_6 < 256; ++VAR_6)
  VAR_5[VAR_6] = 'a';
 VAR_5[256 - 1] = 'x';
 FUNC_0(VAR_7, (unsigned char *)VAR_5, 256);
 FUNC_5(VAR_7);
 VAR_2 = FUNC_2(VAR_7, (unsigned char *)"xy", 2);
 FUNC_9(VAR_2 == ((void*)0));


 VAR_2 = FUNC_2(VAR_7, (unsigned char *)"ax", 2);
 FUNC_8(VAR_2 != ((void*)0));
 FUNC_9(FUNC_7((char*)VAR_2, "ax", 2) == 0);

end:
 if (VAR_7)
  FUNC_3(VAR_7);
}
