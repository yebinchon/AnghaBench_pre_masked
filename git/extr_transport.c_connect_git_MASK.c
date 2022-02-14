
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int url; struct git_transport_data* data; } ;
struct git_transport_data {int* fd; int conn; } ;


 int FUNC_0 (int*,int ,char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct transport *VAR_0, const char *VAR_1,
         const char *VAR_2, int VAR_3[2])
{
 struct git_transport_data *VAR_4 = VAR_0->data;
 VAR_4->conn = FUNC_0(VAR_4->fd, VAR_0->url,
     VAR_2, 0);
 VAR_3[0] = VAR_4->fd[0];
 VAR_3[1] = VAR_4->fd[1];
 return 0;
}
