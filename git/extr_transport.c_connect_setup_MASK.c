
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {scalar_t__ verbose; int family; int url; struct git_transport_data* data; } ;
struct TYPE_2__ {int uploadpack; int receivepack; } ;
struct git_transport_data {TYPE_1__ options; int fd; scalar_t__ conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct transport *VAR_3, int VAR_4)
{
 struct git_transport_data *VAR_5 = VAR_3->data;
 int VAR_6 = VAR_3->verbose > 0 ? VAR_2 : 0;

 if (VAR_5->conn)
  return 0;

 switch (VAR_3->family) {
 case 130: break;
 case 129: VAR_6 |= VAR_0; break;
 case 128: VAR_6 |= VAR_1; break;
 }

 VAR_5->conn = FUNC_0(VAR_5->fd, VAR_3->url,
     VAR_4 ? VAR_5->options.receivepack :
     VAR_5->options.uploadpack,
     VAR_6);

 return 0;
}
