
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bootpc_tagcontext {int overload; scalar_t__ badopt; scalar_t__ badtag; scalar_t__ foundopt; size_t taglen; char* buf; } ;
struct bootp_packet {unsigned char* vend; scalar_t__ sname; scalar_t__ file; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bootp_packet*) ;
 int FUNC_1 (struct bootpc_tagcontext*,unsigned char*,int,int) ;

__attribute__((used)) static unsigned char *
FUNC_2(struct bootpc_tagcontext *VAR_2,
    struct bootp_packet *VAR_3, int VAR_4, int VAR_5)
{
 VAR_2->overload = 0;
 VAR_2->badopt = 0;
 VAR_2->badtag = 0;
 VAR_2->foundopt = 0;
 VAR_2->taglen = 0;

 if (FUNC_0(VAR_3) == 0)
  return ((void*)0);

 FUNC_1(VAR_2, &VAR_3->vend[4],
     (unsigned char *) VAR_3 + VAR_4 - &VAR_3->vend[4], VAR_5);

 if ((VAR_2->overload & VAR_0) != 0)
  FUNC_1(VAR_2,
      (unsigned char *) VAR_3->file,
      sizeof(VAR_3->file),
      VAR_5);
 if ((VAR_2->overload & VAR_1) != 0)
  FUNC_1(VAR_2,
      (unsigned char *) VAR_3->sname,
      sizeof(VAR_3->sname),
      VAR_5);

 if (VAR_2->badopt != 0 || VAR_2->badtag != 0 || VAR_2->foundopt == 0)
  return ((void*)0);
 VAR_2->buf[VAR_2->taglen] = '\0';
 return VAR_2->buf;
}
