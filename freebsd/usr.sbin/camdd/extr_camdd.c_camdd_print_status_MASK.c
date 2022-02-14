
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef long double uint64_t ;
struct timespec {long double tv_nsec; int tv_sec; } ;
struct camdd_dev {scalar_t__ write_dev; scalar_t__ bytes_transferred; int device_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,char*,long double,...) ;
 long double FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_4 (char*) ;

void
FUNC_5(struct camdd_dev *VAR_2, struct camdd_dev *VAR_3,
     struct timespec *VAR_4)
{
 struct timespec VAR_5;
 uint64_t VAR_6;
 long double VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_0(VAR_0, &VAR_5);
 if (VAR_9 != 0) {
  FUNC_4("Unable to get done time");
  return;
 }

 FUNC_3(&VAR_5, VAR_4, &VAR_5);

 VAR_6 = VAR_5.tv_nsec + (VAR_5.tv_sec * 1000000000);
 VAR_8 = VAR_6;
 VAR_8 /= 1000000000;

 FUNC_1(VAR_1, "%Lf bytes %s %d\n%jd bytes %s %d\n"
  "%.4Lf seconds elapsed\n",
  (uintmax_t)VAR_2->bytes_transferred,
  (VAR_2->write_dev == 0) ? "read from" : "written to",
  VAR_2->device_name,
  (uintmax_t)VAR_3->bytes_transferred,
  (VAR_3->write_dev == 0) ? "read from" : "written to",
  VAR_3->device_name, VAR_8);

 VAR_7 = FUNC_2(VAR_3->bytes_transferred,VAR_2->bytes_transferred);
 VAR_7 /= 1024 * 1024;
 VAR_7 *= 1000000000;
 VAR_7 /= VAR_6;
 FUNC_1(VAR_1, "%.2Lf MB/sec\n", VAR_7);
}
