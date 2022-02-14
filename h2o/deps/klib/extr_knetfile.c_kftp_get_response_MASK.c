
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_response; char* response; int ctrl_fd; } ;
typedef TYPE_1__ knetFile ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_5(knetFile *VAR_0)
{

 unsigned char VAR_1;



 int VAR_2 = 0;
 char *VAR_3;
 if (FUNC_3(VAR_0->ctrl_fd, 1) <= 0) return 0;
 while (FUNC_1(VAR_0->ctrl_fd, &VAR_1, 1)) {

  if (VAR_2 >= VAR_0->max_response) {
   VAR_0->max_response = VAR_0->max_response? VAR_0->max_response<<1 : 256;
   VAR_0->response = (char*)FUNC_2(VAR_0->response, VAR_0->max_response);
  }
  VAR_0->response[VAR_2++] = VAR_1;
  if (VAR_1 == '\n') {
   if (VAR_2 >= 4 && FUNC_0(VAR_0->response[0]) && FUNC_0(VAR_0->response[1]) && FUNC_0(VAR_0->response[2])
    && VAR_0->response[3] != '-') break;
   VAR_2 = 0;
   continue;
  }
 }
 if (VAR_2 < 2) return -1;
 VAR_0->response[VAR_2-2] = 0;
 return FUNC_4(VAR_0->response, &VAR_3, 0);
}
