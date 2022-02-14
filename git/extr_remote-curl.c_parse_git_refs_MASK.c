
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int dummy; } ;
struct packet_reader {int dummy; } ;
struct discovery {int shallow; int version; int len; int buf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct packet_reader*) ;
 int FUNC_2 (struct packet_reader*,struct ref**,int ,int *,int *) ;
 int FUNC_3 (struct packet_reader*,int,int ,int ,int) ;





__attribute__((used)) static struct ref *FUNC_4(struct discovery *VAR_4, int VAR_5)
{
 struct ref *VAR_6 = ((void*)0);
 struct packet_reader VAR_7;

 FUNC_3(&VAR_7, -1, VAR_4->buf, VAR_4->len,
      VAR_0 |
      VAR_2 |
      VAR_1);

 VAR_4->version = FUNC_1(&VAR_7);
 switch (VAR_4->version) {
 case 128:






  break;
 case 129:
 case 130:
  FUNC_2(&VAR_7, &VAR_6, VAR_5 ? VAR_3 : 0,
     ((void*)0), &VAR_4->shallow);
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }

 return VAR_6;
}
