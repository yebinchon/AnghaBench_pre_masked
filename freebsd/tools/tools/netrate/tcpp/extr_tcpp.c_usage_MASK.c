
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_1, "client: tcpp"
     " -c remoteIP"
     " [-h]"
     " [-P]"
     " [-M localIPcount]"
     " [-l localIPbase]"
     "\n\t"
     " [-b bytespertcp]"
     " [-m maxtcpsatonce]"
     " [-p procs]"
     " [-t tcpsperproc]"
     "\n"
     "\t"
     " [-r baseport]"
     "\n");

 FUNC_1(VAR_1, "server: tcpp"
     " -s"
     " [-P]"
     " [-l localIPbase]"
     " [-m maxtcpsatonce]"
     " [-p procs]"
     "\n"
     "\t"
     " [-r baseport]"
     "\n");
 FUNC_0(VAR_0);
}
