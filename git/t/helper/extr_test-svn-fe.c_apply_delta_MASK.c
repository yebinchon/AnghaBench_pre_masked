
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sliding_view {int buf; } ;
struct line_buffer {int dummy; } ;
typedef int off_t ;


 struct line_buffer VAR_0 ;
 struct sliding_view FUNC_0 (struct line_buffer*,int) ;
 scalar_t__ FUNC_1 (struct line_buffer*) ;
 scalar_t__ FUNC_2 (struct line_buffer*,char const*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int *,int ) ;
 scalar_t__ FUNC_6 (struct line_buffer*,int ,struct sliding_view*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(int VAR_3, const char **VAR_4)
{
 struct line_buffer VAR_5 = VAR_0;
 struct line_buffer VAR_6 = VAR_0;
 struct sliding_view VAR_7 = FUNC_0(&VAR_5, -1);

 if (VAR_3 != 5)
  FUNC_7(VAR_2);

 if (FUNC_2(&VAR_5, VAR_4[2]))
  FUNC_3("cannot open preimage");
 if (FUNC_2(&VAR_6, VAR_4[3]))
  FUNC_3("cannot open delta");
 if (FUNC_6(&VAR_6, (off_t) FUNC_5(VAR_4[4], ((void*)0), 0),
     &VAR_7, VAR_1))
  return 1;
 if (FUNC_1(&VAR_5))
  FUNC_3("cannot close preimage");
 if (FUNC_1(&VAR_6))
  FUNC_3("cannot close delta");
 FUNC_4(&VAR_7.buf);
 return 0;
}
