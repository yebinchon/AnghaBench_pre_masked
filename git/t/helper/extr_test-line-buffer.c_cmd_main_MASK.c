
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_buffer {int dummy; } ;


 struct line_buffer VAR_0 ;
 scalar_t__ FUNC_0 (struct line_buffer*) ;
 scalar_t__ FUNC_1 (struct line_buffer*,int ) ;
 scalar_t__ FUNC_2 (struct line_buffer*,char const*) ;
 char* FUNC_3 (struct line_buffer*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,struct line_buffer*) ;
 int VAR_1 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_2, const char **VAR_3)
{
 struct line_buffer VAR_4 = VAR_0;
 struct line_buffer VAR_5 = VAR_0;
 struct line_buffer *VAR_6 = &VAR_4;
 const char *VAR_7;
 char *VAR_8;

 if (VAR_2 == 1)
  VAR_7 = ((void*)0);
 else if (VAR_2 == 2)
  VAR_7 = VAR_3[1];
 else
  FUNC_9("test-line-buffer [file | &fd] < script");

 if (FUNC_2(&VAR_4, ((void*)0)))
  FUNC_5("open error");
 if (VAR_7) {
  if (*VAR_7 == '&') {
   if (FUNC_1(&VAR_5, FUNC_8(VAR_7 + 1)))
    FUNC_5("error opening fd %s", VAR_7 + 1);
  } else {
   if (FUNC_2(&VAR_5, VAR_7))
    FUNC_5("error opening %s", VAR_7);
  }
  VAR_6 = &VAR_5;
 }

 while ((VAR_8 = FUNC_3(&VAR_4)))
  FUNC_7(VAR_8, VAR_6);

 if (VAR_7 && FUNC_0(&VAR_5))
  FUNC_4("error reading from %s", VAR_7);
 if (FUNC_0(&VAR_4))
  FUNC_4("input error");
 if (FUNC_6(VAR_1))
  FUNC_4("output error");
 return 0;
}
