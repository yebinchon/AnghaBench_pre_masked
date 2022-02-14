
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_hdr {int bh_hdrlen; int bh_caplen; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;

void FUNC_4() {
 static unsigned char VAR_1[4096];
 int VAR_2;
 struct bpf_hdr* VAR_3;
 unsigned char* VAR_4;

 VAR_2 = FUNC_3(VAR_0, VAR_1, sizeof(VAR_1));
 if (VAR_2 == -1)
  FUNC_1(1,"read()");

 VAR_3 = (struct bpf_hdr*) VAR_1;
 VAR_2 -= VAR_3->bh_hdrlen;

 if (VAR_2 != VAR_3->bh_caplen) {
  FUNC_0( VAR_2 > VAR_3->bh_caplen);
  VAR_2 = VAR_3->bh_caplen;
 }

 VAR_4 = (unsigned char*) VAR_3 + VAR_3->bh_hdrlen;
 FUNC_2(VAR_4, VAR_2);
}
